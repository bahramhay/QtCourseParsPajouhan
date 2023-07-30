#include <iostream>
#include <vector>

using namespace std;

struct Items
{
    string name;
    int price;
    char ownedBy;
    char indicated;
    void fillingMembers(string Name,int Price){
        name=Name;
        price=Price;
    };
};

struct Players
{

    char indicated;
    int position;
};

void move(Players* player, int result){

    player->position += result;
}

int toss(){
    int dropToss=(rand()%6)+1;
    return  dropToss;
}

void showOnConsole(Items* field,int arrSize){

    const int line=11;
    const int rows=(arrSize-(2*line))/2;
    int indicator=1;
    char reverse[line];
    int reverseIndex=line-1;
    for (int i=0;i<arrSize;i++) {
        if (i<line) {

            cout<<field[i].indicated<<" ";
        }

        else if(i<line+rows){
            cout<<endl;

            cout<<field[arrSize-indicator].indicated;
            indicator++;
                for (int k=0;k<(line*2)-3;k++) {
                    cout<<" ";
                }
            cout<<field[i].indicated;

        }

        else if(i<arrSize-rows){
            if(i==line+rows)
                            cout<<endl;

            reverse[reverseIndex]=field[i].indicated;
            reverseIndex--;
        }

        else{
            continue;
        }
    }
    for (auto w:reverse) {
        cout<<w<<" ";
    }
}

int main()
{
    const int arrSize=40;
    Items field[arrSize];
    Players p[2];

// setting up:
    p[0].indicated='A';
    p[0].position=0;

    p[1].indicated='B';
    p[1].position=0;


    for (int i=0;i<arrSize;i++) {

        field[i].indicated='*';
    }

    field[0].fillingMembers("go",0);
    field[1].fillingMembers("brown",100);
    field[2].fillingMembers("-",0);
    field[3].fillingMembers("brown",100);
    field[4].fillingMembers("tax",-200);
    field[5].fillingMembers("station",0);
    field[6].fillingMembers("blue",200);
    field[7].fillingMembers("?",0);
    field[8].fillingMembers("blue",200);
    field[9].fillingMembers("blue",200);
    field[10].fillingMembers("jail",0);
    field[11].fillingMembers("pink",300);
    field[12].fillingMembers("death",0);
    field[13].fillingMembers("pink",300);
    field[14].fillingMembers("pink",300);
    field[15].fillingMembers("station",0);
    field[16].fillingMembers("orange",400);
    field[17].fillingMembers("-",0);
    field[18].fillingMembers("orange",400);
    field[19].fillingMembers("pink",400);
    field[20].fillingMembers("parking",0);
    field[21].fillingMembers("red",500);
    field[22].fillingMembers("?",0);
    field[23].fillingMembers("red",500);
    field[24].fillingMembers("red",500);
    field[25].fillingMembers("station",0);
    field[26].fillingMembers("yellow",600);
    field[27].fillingMembers("yellow",600);
    field[28].fillingMembers("bomb",0);
    field[29].fillingMembers("yellow",600);
    field[30].fillingMembers("gotojail",0);
    field[31].fillingMembers("green",700);
    field[32].fillingMembers("green",700);
    field[33].fillingMembers("-",0);
    field[34].fillingMembers("green",700);
    field[35].fillingMembers("station",0);
    field[36].fillingMembers("?",0);
    field[37].fillingMembers("purple",800);
    field[38].fillingMembers("tax",-75);
    field[39].fillingMembers("purple",800);
// end of setting up

    int iterate=2;
    while(iterate>0){
        for (int i=0;i<2;i++) {
            int tossResult=toss();
            cout<<tossResult<<" ";
            field[p[0].position].indicated='*';
            move(&p[0],tossResult);
        }
        cout<<endl;

        cout<<p[0].position<<endl;

        for (int i=0;i<2;i++) {
            int tossResult=toss();
            cout<<tossResult<<" ";
            field[p[1].position].indicated='*';
            move(&p[1],tossResult);
        }
        cout<<endl;

        cout<<p[1].position<<endl;

        if(p[0].position==p[1].position)
            field[p[0].position].indicated='C';
        else {
            field[p[0].position].indicated='A';
            field[p[1].position].indicated='B';
        }

        showOnConsole(field,arrSize);

        cout<<endl;

        iterate--;
    }

    return 0;
}
