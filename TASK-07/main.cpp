#include <iostream>
#include <string>
#include <climits>

enum Banks {PKO,BGZ, BRE, BPH};

struct Account {
    Banks bank;
    int balance;
};

struct Person {
    char name[20];
    Account account;
};

struct Couple {
    Person he;
    Person she;
};

const Couple* bestClient(const Couple* cpls, int size, Banks bank);

auto main() -> int {
    using std::cout;

    Couple cpls[] = {
        {{"Johny", Account {PKO,1200}} ,  {"Mary", Account {BGZ,1400}}},
        {{"Peter", Account {BGZ,1400}}, {"Suzy", Account {BRE,-1500}}},
        {{"Kevin", Account {PKO,1600}} ,  {"Katy", Account {BPH,1500}}},
        {{"Kenny", Account {BPH,200}} , {"Lucy", Account {BRE,-201}}}
    };

    const Couple* p = bestClient(cpls, 4, BPH);
    if (p) {
        cout << p -> he.name << " and " << p-> she.name << ": "
        << p -> he.account.balance + p -> she.account.balance << "\n";
    } else {
        cout << "No such couple...\n";
    }
}


const Couple* bestClient(const Couple* cpls, int size, Banks bank) {

    //Since we have negative values in some accounts (we can get spouse + wife -100 for exp) so -100 is bigger than INT_MIN and we override max accordingly
    auto max = int(INT_MIN);
    const Couple* best = nullptr;

    for (int i = 0; i < size; i++) {
        if (cpls[i].he.account.bank == bank || cpls[i].she.account.bank == bank){
            auto coupleSumTotal = int();
            coupleSumTotal += cpls[i].he.account.balance + cpls[i].she.account.balance;
            if (coupleSumTotal > max) {
                max = coupleSumTotal;
                best = &cpls[i];
            }
        }
    }
    return best;
}