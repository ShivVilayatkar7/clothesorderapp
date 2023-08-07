# clothesorderapp
#include<iostream>
#include<string>
using namespace std;

struct men{
	int etc1,etc2,etc3,etc4;
	int mprice[16],mtotal1[4],mtotal2[4],mtotal3[4],mtotal4[4];
	int mchoice,msubchoise1[4],msubchoise2[4],msubchoise3[4],msubchoise4[4];
	int mquantity1[4],mquantity2[4],mquantity3[4],mquantity4[4];
	int mcal1[4], mcal2[4], mcal3[4], mcal4[4], mcalculate1[4],mcalculate2[4],mcalculate3[4],mcalculate4[4];
	int marr1[4]={350,350,350,350};
	int marr2[4]={412,412,412,412};
	int marr3[4]={350,350,350,350};
	int marr4[4]={280,280,280,280};
	string msize1[4],msize2[4],msize3[4],msize4[4];
};

men me;

struct female{
	int fetc1,fetc2,fetc3,fetc4;
	int fprice[16],ftotal1[4],ftotal2[4],ftotal3[4],ftotal4[4];
	int fchoice,fsubchoise1[4],fsubchoise2[4],fsubchoise3[4],fsubchoise4[4];
	int fquantity1[4],fquantity2[4],fquantity3[4],fquantity4[4];
	int fcal1[4], fcal2[4], fcal3[4], fcal4[4], fcalculate1[4],fcalculate2[4],fcalculate3[4],fcalculate4[4];
	int farr2[4]={450,450,450,450};
	int farr1[4]={310,310,310,310};
	int farr3[4]={445,445,445,445};
	int farr4[4]={540,540,540,540};
	string fsize1[4],fsize2[4],fsize3[4],fsize4[4];
};

female fe;

struct child{
	int cetc1,cetc2,cetc3,cetc4;
	int cprice[16],ctotal1[4],ctotal2[4],ctotal3[4],ctotal4[4];
	int cchoice,csubchoise1[4],csubchoise2[4],csubchoise3[4],csubchoise4[4];
	int cquantity1[4],cquantity2[4],cquantity3[4],cquantity4[4];
	int ccal1[4], ccal2[4], ccal3[4], ccal4[4], ccalculate1[4],ccalculate2[4],ccalculate3[4],ccalculate4[4];
	int carr1[4]={300,300,300,300};
	int carr2[4]={340,340,340,340};
	int carr3[4]={455,455,455,455};
	int carr4[4]={360,360,360,360};
	string csize1[4],csize2[4],csize3[4],csize4[4];
};

child ch;

struct pay{
	string name,email,address,accno;
	int phno,pincode;
	int total[4];
};

pay pp;

void paymentinfo(){
	cout << "\n\t------------------------------------------------------\n";
	cout << "\t| Personal Info                                      |\n";
	cout << "\t------------------------------------------------------\n";
	cout << "\tName               : ";
	cin >> pp.name;
	cout << "\tE-mail id          : ";
	cin >> pp.email;
	cout << "\tDelivery Address   : ";
	cin >> pp.address;
	cout << "\tPincode            : ";
	cin >> pp.pincode;
	cout << "\tUPI/Account Number : ";
	cin >> pp.accno;
	cout << "\tPhone Number       : ";
	cin >> pp.phno;
	cout << "\t------------------------------------------------------\n";
	cout << "\tDetails saved SuccessfullY......\n";
	cout << "\t------------------------------------------------------\n";
}

void payout(){
	cout << "\n\t------------------------------------------------------\n";
	cout << "\t| Details                                            |\n";
	cout << "\t------------------------------------------------------\n";	
	cout << "\tName                  : " << pp.name << "\n";
	cout << "\tEmail id              : " << pp.email << "\n";
	cout << "\tAccount Num. / UPI id : " << pp.accno << "\n";
	cout << "\tAddress               : " << pp.address << "\n";
	cout << "\tpincode               : " << pp.pincode << "\n";
	cout << "\tPhone Number          : " << pp.phno << "\n";
	cout << "\t-----------------------------------------------------\n";
}

void man(){
	int men;
	cout << "\n\t-----------------------------------------------------\n";
	cout << "\t options \n";
	cout << "\t-----------------------------------------------------\n";
	cout << "\t1 shirts\n";
	cout << "\t2 trouser\n";
	cout << "\t3 t-shirts\n";
	cout << "\t4 daily wear\n";
	cout << "\t-----------------------------------------------------\n";
	cout << "\twhat are you looking for : ";
	cin >> men;
	
	if(men == 1){
		cout << "\n\t----------------------Shirts--------------------------\n";
		cout << "\t|1 white shirt                                         |\n";
		cout << "\t|2 black shirt                                         |\n";
		cout << "\t|3 Navy blue                                           |\n";
		cout << "\t|4 sky Blue shirt with cheks                           |\n";
		cout << "\t|5 contact us to as we bring the shirts as your choise |\n";
		cout << "\t--------------------------------------------------------\n";
	
		cout << "\tHow Many product you like to add in cart.. : ";
		cin >> me.etc1;
		cout << "\t--------------------------------------------------------\n";
		
		for(int i=0;i<me.etc1;i++){
			cout << "\n\tYour choise : ";
			cin >> me.msubchoise1[i];	
			cout << "\tSize : (Small,Medium,XL,XXL,XXXL) ";
			cin >> me.msize1[i];
			cout << "\tQuantity : ";
			cin >> me.mquantity1[i];
		}
	
		cout << "\t---------------------------------------------------------\n";	
		for(int i=0;i<4;i++){
			me.mtotal1[i]=me.mquantity1[i]*me.marr1[i];
			me.mcal1[i]+=me.mtotal1[i];
			me.mcalculate1[i]=me.mcal1[i];
		}
			
	} else if(men == 2){
		cout << "\n\t--------------------Trouser---------------------------\n";
		cout << "\t1 white trouser                                        |\n";
		cout << "\t2 black trouser                                        |\n";
		cout << "\t3 Navy blue trouser                                    |\n";
		cout << "\t4 lite brown trouser                                   |\n";
		cout << "\t5 contact us to as we bring the trouser as your choise |\n";
		cout << "\t--------------------------------------------------------\n";		
		cout << "\tHow Many product you like to add in cart.. : ";
		cin >> me.etc2;
		cout << "\t--------------------------------------------------------\n";
		for(int i=0;i<me.etc2;i++){
			cout << "\n\tYour choise : ";
			cin >> me.msubchoise2[i];
			cout << "\tSize : (Small,Medium,XL,XXL,XXXL) ";
			cin >> me.msize2[i];
			cout << "\tQuantity : ";
			cin >> me.mquantity2[i];
		}
		cout << "\t--------------------------------------------------------\n";
			
		for(int i=0;i<4;i++){
			me.mtotal2[i]=me.mquantity2[i]*me.marr2[i];
			me.mcal2[i]+=me.mtotal1[i];
			me.mcalculate2[i]=me.mcal2[i];
		}
	} else if(men == 3){
		cout << "\n\t-------------------t-Shirts---------------------------\n";
		cout << "\t1 half sleeves T-shirt                                  |\n";
		cout << "\t2 full sleeves t-shirt                                  |\n";
		cout << "\t3 hoodies                                               |\n";
		cout << "\t4 v-nake t-shirt                                        |\n";
		cout << "\t5 contact us to as we bring the t-shirts as your choise.|\n";
		cout << "\t---------------------------------------------------------\n";
	
		cout << "\tHow Many product you like to add in cart.. : ";
		cin >> me.etc3;
		cout << "\t---------------------------------------------------------\n";	
		for(int i=0;i<me.etc3;i++){
			cout << "\n\tYour choise : ";
			cin >> me.msubchoise3[i];
			cout << "\tSize : (Small,Medium,XL,XXL,XXXL) ";
			cin >> me.msize3[i];
			cout << "\tQuantity : ";
			cin >> me.mquantity3[i];
		}
		cout << "\t--------------------------------------------------------\n";
		for(int i=0;i<4;i++){
			me.mtotal3[i]=me.mquantity3[i]*me.marr3[i];
			me.mcal3[i]+=me.mtotal3[i];
			me.mcalculate3[i]=me.mcal3[i];
		}
	} else if(men == 4){
		cout << "\n\t----------------------daily wear-----------------------\n";
		cout << "\t1 night pants                                            |\n";
		cout << "\t2 track pants                                            |\n";
		cout << "\t3 barmuda                                                |\n";
		cout << "\t5 contact us to as we bring the daily wear as your choise|\n";
		cout << "\t--------------------------------------------------------- \n";
			
		cout << "\tHow Many product you like to add in cart.. : ";
		cin >> me.etc4;
		cout << "\t----------------------------------------------------------\n";
		for(int i=0;i<me.etc4;i++){
			cout << "\n\tYour choise : ";
			cin >> me.msubchoise4[i];
			cout << "\tSize : (Small,Medium,XL,XXL,XXXL) ";
			cin >> me.msize4[i];
			cout << "\tQuantity : ";
			cin >> me.mquantity4[i];	
		}
		cout << "\t----------------------------------------------------------\n";
		for(int i=0;i<4;i++){
			me.mtotal4[i]=me.mquantity4[i]*me.marr4[i];
			me.mcal4[i]+=me.mtotal4[i];
			me.mcalculate4[i]=me.mcal4[i];
		}
		for(int i=0;i<1;i++){
			me.mprice[i]=me.mcalculate1[i]+me.mcalculate2[i]+me.mcalculate3[i]+me.mcalculate4[i];
		}
	}
}

void women(){
	int female;
	cout << "\t-----------------------------------------------------\n";
	cout << "\t options \n";
	cout << "\t-----------------------------------------------------\n";
	cout << "\t1 top\n";
	cout << "\t2 jeans\n";
	cout << "\t3 t-shirts\n";
	cout << "\t4 daily wear (night siut)\n";
	cout << "\t-----------------------------------------------------\n";
	cout << "\twhat are you looking for : ";
	cin >> female;
	cout << "\t-----------------------------------------------------\n";
	
	if(female == 1){
		cout << "\n\t------------------------top-------------------------\n";
		cout << "\t|1 white top                                         |\n";
		cout << "\t|2 black top                                         |\n";
		cout << "\t|3 printed top                                       |\n";
		cout << "\t|4 designer tops                                     |\n";	
		cout << "\t|5 contact us to as we bring the top as your choise. |\n";
		cout << "\t----------------------------------------------------- \n";
	
		cout << "\tHow Many product you like to add in cart.. : ";
		cin >> fe.fetc1;
	
		cout << "\t----------------------------------------------------- \n";
	
		for(int i=0;i<fe.fetc1;i++){
			cout << "\n\tYour choise : ";
			cin >> fe.fsubchoise1[i];
			cout << "\tSize : (Small,Medium,XL,XXL,XXXL) ";
			cin >> fe.fsize1[i];
			cout << "\tQuantity : ";
			cin >> fe.fquantity1[i];
		}
		cout << "\t------------------------------------------------------\n";
		for(int i=0;i<4;i++){
			fe.ftotal1[i]=fe.fquantity1[i]*fe.farr1[i];	
			fe.fcal1[i]+=fe.ftotal1[i];
			fe.fcalculate1[i]=fe.fcal1[i];
		}
	} else if(female == 2){
		cout << "\n\t-------------------Trouser----------------------------\n";
		cout << "\t1 white jeans                                           |\n";
		cout << "\t2 black jeans                                           |\n";
		cout << "\t3 trendy jeans                                          |\n";
		cout << "\t4 short jeans                                           |\n";
		cout << "\t5 contact us to as we bring the jeans as your choise.   |\n";
		cout << "\t-------------------------------------------------------- \n";
			
		cout << "\tHow Many product you like to add in cart.. : ";
		cin >> fe.fetc2;
		cout << "\t---------------------------------------------------------\n";
		for(int i=0;i<fe.fetc2;i++){
			cout << "\n\tYour choise : ";
			cin >> fe.fsubchoise2[i];
			cout << "\tSize : (Small,Medium,3XL,XXL,XXXL) ";
			cin	>> fe.fsize2[i];
			cout << "\tQuantity : ";
			cin >> fe.fquantity2[i];
		}
		cout << "\t---------------------------------------------------------\n";			
				
		for(int i=0;i<4;i++){
			fe.ftotal2[i]=fe.fquantity2[i]*fe.farr2[i];
			fe.fcal2[i]+=fe.ftotal1[i];
			fe.fcalculate2[i]=fe.fcal2[i];
		}	
	} else if(female == 3){
		cout << "\n\t----------------------t-Shirts--------------------------\n";
		cout << "\t1 half sleeves T-shirt                                   |\n";
		cout << "\t2 full sleeves t-shirt                                   |\n";
		cout << "\t3 hoodies                                                |\n";
		cout << "\t4 v-nake t-shirt                                         |\n";
		cout << "\t5 contact us to as we bring the t-shirts as your choise. |\n";
		cout << "\t--------------------------------------------------------- \n";	
	
		cout << "\tHow Many product you like to add in cart.. : ";	
		cin >> fe.fetc3;
		cout << "\t----------------------------------------------------------\n";
		for(int i=0;i<fe.fetc3;i++){
			cout << "\n\tYour choise : ";
			cin >> fe.fsubchoise3[i];
			cout << "\tSize : (Small,Medium,XL,XXL,XXXL) ";
			cin >> fe.fsize3[i];
			cout << "\tQuantity : ";
			cin >> fe.fquantity3[i];
		}
		cout << "\t----------------------------------------------------------\n";
		for(int i=0;i<4;i++){
			fe.ftotal3[i]=fe.fquantity3[i]*fe.farr3[i];
			fe.fcal3[i]+=fe.ftotal3[i];
			fe.fcalculate3[i]=fe.fcal3[i];
		}		
	} else if(female == 4){
		cout << "\n\t----------------------daily wear------------------------\n";
		cout << "\t1 night pants                                            |\n";	
		cout << "\t2 track pants                                            |\n";
		cout << "\t3 barmuda                                                |\n";
		cout << "\t5 contact us to as we bring the daily wear as your choise|\n";
		cout << "\t--------------------------------------------------------- \n";
			
		cout << "\tHow Many product you like to add in cart.. : ";
		cin >> fe.fetc4;
		cout << "\t----------------------------------------------------------\n";
		for(int i=0;i<fe.fetc4;i++){
			cout << "\n\tYour choise : ";
			cin >> fe.fsubchoise4[i];
			cout << "\tSize : (Small,Medium,XL,XXL,XXXL) ";
			cin >> fe.fsize4[i];
			cout << "\tQuantity : ";
			cin >> fe.fquantity4[i];	
		}
		cout << "\t----------------------------------------------------------\n";
		for(int i=0;i<4;i++){
			fe.ftotal4[i]=fe.fquantity4[i]*fe.farr4[i];
			fe.fcal4[i]+=fe.ftotal4[i];
			fe.fcalculate4[i]=fe.fcal4[i];
			}	
		}
		for(int i=0;i<1;i++){
			fe.fprice[i]=fe.fcalculate1[i]+fe.fcalculate2[i]+fe.fcalculate3[i]+fe.fcalculate4[i];
	}
}

void childs(){
	int child;
	cout << "\t-----------------------------------------------------\n";
	cout << "\t option \n";
	cout << "\t-----------------------------------------------------\n";
	cout << "\t1 baby suits\n";
	cout << "\t2 jeans\n";
	cout << "\t3 t-shirts\n";
	cout << "\t4 daily wear (night siut)\n";
	cout << "\t-----------------------------------------------------\n";
	cout << "\twhat are you looking for : ";
	cin >> child;
	
	cout << "\t-----------------------------------------------------\n";
	if(child == 1){
		cout << "\n\t---------------------baby suits---------------------\n";
		cout << "\t|1 cartoon theme suits                               |\n";
		cout << "\t|2 simple solid coloured suits                       |\n";
		cout << "\t|3 designer soits                                    |\n";
		cout << "\t|5 contact us to as we bring the top as your choise. |\n";
		cout << "\t----------------------------------------------------- \n";
	
		cout << "\tHow Many product you like to add in cart.. : ";
		cin >> ch.cetc1;
		cout << "\t-----------------------------------------------------\n";
		
		for(int i=0;i<ch.cetc1;i++){
			cout << "\n\tYour choise : ";
			cin >> ch.csubchoise1[i];
			cout << "\tSize : (Small,Medium,XL,XXL,XXXL) ";
			cin >> ch.csize1[i];
			cout << "\tQuantity : ";
			cin >>  ch.cquantity1[i];
		}
		
		cout << "\t-----------------------------------------------------\n";
		
		for(int i=0;i<4;i++){
			ch.ctotal1[i]=ch.cquantity1[i]*ch.carr1[i];
			ch.ccal1[i]+=ch.ctotal1[i];
			ch.ccalculate1[i]=ch.ccal1[i];
		}		
	} else if(child == 2){
		cout << "\n\t----------------------Trouser-------------------------------\n";
		cout << "\t1 white jeans                                                |\n";
		cout << "\t2 black jeans                                                |\n";
		cout << "\t3 trendy jeans                                               |\n";
		cout << "\t4 short jeans                                                |\n";
		cout << "\t5 contact us to as we bring the jeans as your choise.        |\n";
		cout << "\t------------------------------------------------------------- \n";
	
		cout << "\tHow Many product you like to add in cart.. : ";
		cin >> ch.cetc2;
		cout << "\t-----------------------------------------------------\n";
		for(int i=0;i<ch.cetc2;i++){
			cout << "\n\tYour choise : ";
			cin >> ch.csubchoise2[i];
			cout << "\tSize : (Small,Medium,XL,XXL,XXXL) ";
			cin >> ch.csize2[i];
			cout << "\tQuantity : ";
			cin >> ch.cquantity2[i];
		}
		cout << "\t-----------------------------------------------------\n";
		for(int i=0;i<4;i++){
			ch.ctotal2[i]=ch.cquantity2[i]*ch.carr2[i];
			ch.ccal2[i]+=ch.ctotal1[i];
			ch.ccalculate2[i]=ch.ccal2[i];
		}	
	} else if(child == 3){
		cout << "\n\t----------------------t-Shirts------------------------------\n";
		cout << "\t1 half sleeves T-shirt                                       |\n";
		cout << "\t2 full sleeves t-shirt                                       |\n";
		cout << "\t3 hoodies                                                    |\n";
		cout << "\t4 v-nake t-shirt                                             |\n";
		cout << "\t5 contact us to as we bring the t-shirts as your choise.     |\n";
		cout << "\t------------------------------------------------------------- \n";
			
		cout << "\tHow Many product you like to add in cart.. : ";
		cin >> ch.cetc3;

		cout << "\t-----------------------------------------------------\n";
		for(int i=0;i<ch.cetc3;i++){
			cout << "\n\tYour choise : ";
			cin >> ch.csubchoise3[i];
			cout << "\tSize : (Small,Medium,XL,XXL,XXXL) ";
			cin >> ch.csize3[i];
			cout << "\tQuantity : ";
			cin >> ch.cquantity3[i];
		}
		cout << "\t-----------------------------------------------------\n";
		for(int i=0;i<4;i++){
			ch.ctotal3[i]=ch.cquantity3[i]*ch.carr3[i];
			ch.ccal3[i]+=ch.ctotal3[i];
			ch.ccalculate3[i]=ch.ccal3[i];
		}
	} else if(child == 4){
		cout << "\n\t----------------------daily wear---------------------------\n";
		cout << "\t1 night pants                                               |\n";
		cout << "\t2 track pants                                               |\n";
		cout << "\t3 barmuda                                                   |\n";
		cout << "\t5 contact us to as we bring the daily wear as your choise.  |\n";
		cout << "\t------------------------------------------------------------ \n";
		
		cout << "\tHow Many product you like to add in cart.. : ";	
		cin >> ch.cetc4	;
		cout << "\t-----------------------------------------------------\n";
		for(int i=0;i<ch.cetc4;i++){
			cout << "\n\tYour choise : ";
			cin >> ch.csubchoise4[i];
			cout << "\tSize : (Small,Medium,XL,XXL,XXXL) ";
			cin >> ch.csize4[i];
			cout << "\tQuantity : ";
			cin >> ch.cquantity4[i];	
		}
		cout << "\t-----------------------------------------------------\n";
		for(int i=0;i<4;i++){
			ch.ctotal4[i]=ch.cquantity4[i]*ch.carr4[i];
			ch.ccal4[i]+=ch.ctotal4[i];
			ch.ccalculate4[i]=ch.ccal4[i];
		}	
	}
		for(int i=0;i<1;i++){
		ch.cprice[i]=ch.ccalculate1[i]+ch.ccalculate2[i]+ch.ccalculate3[i]+ch.ccalculate4[i];
	}
}

void cart(){
	cout << "\t----------------------------------------------------\n";
	cout << "\t| Your Orders..                                    |\n";
	cout << "\t----------------------------------------------------\n";	
	
	if(me.mquantity1[1]>0||me.mquantity2[2]>0||me.mquantity3[3]>0||me.mquantity4[4]>0){
		cout << "\t----------------------------------------------------\n";
		cout << "\t|                   MENS                           |\n";
		cout << "\t----------------------------------------------------\n";
	}
	
	for(int i=0;i<4;i++){
		if(me.mquantity1[i]>0){	
			if(me.msubchoise1[i] == 1){
				cout << "\n\tWhite shirt -> 350rs\n";
				cout << "\tSize : " << me.msize1[i] << "\n";
				cout << "\tTotal (price*quantity) : " << me.mtotal1[i] << "\n";
			} else if(me.msubchoise1[i] == 2){
				cout << "\n\tblack shirt -> 350rs\n";
				cout << "\tSize : " << me.msize1[i] << "\n";
				cout << "\tTotal (price*quantity) : " << me.mtotal1[i] << "\n";
			} else if(me.msubchoise1[i] == 3){
				cout << "\n\tnavy blue shirt -> 350rs\n";
				cout << "\tSize : " << me.msize1[i] << "\n";
				cout << "\tTotal (price*quantity) : " << me.mtotal1[i] << "\n";
			} else if(me.msubchoise1[i] == 4){
				cout << "\n\tsky Blue shirt with cheks -> 350rs\n";
				cout << "\tSize : " << me.msize1[i] << "\n";
				cout << "\tTotal (price*quantity) : " << me.mtotal1[i] << "\n";
			}
		}
	} 
	
	for(int i=0;i<4;i++){
		if(me.mquantity2[i]>0){	
			if(me.msubchoise2[i] == 1){
				cout << "\n\twhite trouser -> 412rs\n";
				cout << "\tSize : " << me.msize2[i] << "\n";
				cout << "\tTotal (price*quantity) : " << me.mtotal2[i] << "\n";
			} else if(me.msubchoise2[i] == 2){
				cout << "\n\tblack trouser -> 412rs\n";
				cout << "\tSize : " << me.msize2[i] << "\n";
				cout << "\tTotal (price*quantity) : " << me.mtotal2[i] << "\n";
			} else if(me.msubchoise2[i] == 3){
				cout << "\n\tNavy blue trouser -> 412rs\n";
				cout << "\tSize : " << me.msize2[i] << "\n";
				cout << "\tTotal (price*quantity) : " << me.mtotal2[i] << "\n";
			} else if(me.msubchoise2[i] == 4){
				cout << "\n\tlite brown trouser -> 412rs\n";
				cout << "\tSize : " << me.msize2[i] << "\n";
				cout << "\tTotal (price*quantity) : " << me.mtotal2[i] << "\n";
			}
		}
	}

	for(int i=0;i<4;i++){
		if(me.mquantity3[i]>0){
			if(me.msubchoise3[i] == 1){
				cout << "\n\thalf sleeves T-shirt -> 350rs\n";
				cout << "\tSize : " << me.msize3[i] << "\n";
				cout << "\tTotal (price*quantity) : " << me.mtotal3[i] << "\n";
			} else if(me.msubchoise3[i] == 2){
				cout << "\n\tfull sleeves t-shirt -> 350rs\n";
				cout << "\tSize : " << me.msize3[i] << "\n";
				cout << "\tTotal (price*quantity) : " << me.mtotal3[i] << "\n";
			} else if(me.msubchoise3[i] == 3){
				cout << "\n\thoodies -> 350rs\n";
				cout << "\tSize : " << me.msize3[i] << "\n";
				cout << "\tTotal (price*quantity) : " << me.mtotal3[i] << "\n";
			} else if(me.msubchoise3[i] == 4){
				cout << "\n\tv-nake t-shirt -> 350rs\n";
				cout << "\tSize : " << me.msize3[i] << "\n";
				cout << "\tTotal (price*quantity) : " << me.mtotal3[i] << "\n";
			}
		}
	}

	for(int i=0;i<4;i++){
		if(me.mquantity4>0){
			if(me.msubchoise4[i] == 1){
				cout << "\n\tnight pants -> 280rs\n";
				cout << "\tSize : " << me.msize4[i] << "\n";
				cout << "\tTotal (price*quantity) : " << me.mtotal4[i] << "\n";
			} else if(me.msubchoise4[i] == 2){
				cout << "\n\ttrack pants -> 280rs\n";
				cout << "\tSize : " << me.msize4[i] << "\n";
				cout << "\tTotal (price*quantity) : " << me.mtotal4[i] << "\n";
			} else if(me.msubchoise4[i] == 3){
				cout << "\n\tbarmuda -> 280rs\n";
				cout << "\tSize : " << me.msize4[i] << "\n";
				cout << "\tTotal (price*quantity) : " << me.mtotal4[i] << "\n";
			}
		}
	}
	
	if(fe.fquantity1[1]>0||fe.fquantity2[2]>0||fe.fquantity3[3]>0||fe.fquantity4[4]>0){
		cout << "\t----------------------------------------------------\n";
		cout << "\t|                     LADIES                       |\n";
		cout << "\t----------------------------------------------------\n";
	}
	
	for(int i=0;i<4;i++){
		if(fe.fquantity1[i]>0){	
			if(fe.fsubchoise1[i] == 1){
				cout << "\n\twhite top -> 450rs\n";
				cout << "\tSize : " << fe.fsize1[i] << "\n";
				cout << "\tTotal (price*quantity) : " << fe.ftotal1[i] << "\n";
			} else if(fe.fsubchoise1[i] == 2){
				cout << "\n\tblack top -> 450rs\n";
				cout << "\tSize : " << fe.fsize1[i] << "\n";
				cout << "\tTotal (price*quantity) : " << fe.ftotal1[i] << "\n";
			} else if(fe.fsubchoise1[i] == 3){
				cout << "\n\tprinted top -> 450rs\n";
				cout << "\tSize : " << fe.fsize1[i] << "\n";
				cout << "\tTotal (price*quantity) : " << fe.ftotal1[i] << "\n";
			} else if(fe.fsubchoise1[i] == 4){
				cout << "\n\tdesigner tops -> 450rs\n";
				cout << "\tSize : " << fe.fsize1[i] << "\n";
				cout << "\tTotal (price*quantity) : " << fe.ftotal1[i] << "\n";
			}
		}
	} 

	for(int i=0;i<4;i++){
		if(fe.fquantity2[i]>0){	
			if(fe.fsubchoise2[i] == 1){
				cout << "\n\twhite jeans -> 310rs\n";
				cout << "\tSize : " << fe.fsize2[i] << "\n";
				cout << "\tTotal (price*quantity) : " << fe.ftotal2[i] << "\n";
			} else if(fe.fsubchoise2[i] == 2){
				cout << "\n\tblack jeans -> 310rs\n";
				cout << "\tSize : " << fe.fsize2[i] << "\n";
				cout << "\tTotal (price*quantity) : " << fe.ftotal2[i] << "\n";
			} else if(fe.fsubchoise2[i] == 3){
				cout << "\n\ttrendy jeans -> 310rs\n";
				cout << "\tSize : " << fe.fsize2[i] << "\n";
				cout << "\tTotal : (price*quantity) " << fe.ftotal2[i] << "\n";
			} else if(fe.fsubchoise2[i] == 4){
				cout << "\n\tshort jeans -> 310rs\n";
				cout << "\tSize : " << fe.fsize2[i] << "\n";
				cout << "\tTotal (price*quantity) : " << fe.ftotal2[i] << "\n";
			}
		}
	}
	
	for(int i=0;i<4;i++){
		if(fe.fquantity3[i]>0){
			if(fe.fsubchoise3[i] == 1){
				cout << "\n\thalf sleeves T-shirt -> 445rs\n";
				cout << "\tSize : " << fe.fsize3[i] << "\n";
				cout << "\tTotal (price*quantity) : " << fe.ftotal3[i] << "\n";
			} else if(fe.fsubchoise3[i] == 2){
				cout << "\n\tfull sleeves t-shirt -> 445rs\n";
				cout << "\tSize : " << fe.fsize3[i] << "\n";
				cout << "\tTotal (price*quantity) : " << fe.ftotal3[i] << "\n";
			} else if(fe.fsubchoise3[i] == 3){
				cout << "\n\thoodies -> 445rs\n";
				cout << "\tSize : " << fe.fsize3[i] << "\n";
				cout << "\tTotal (price*quantity) : " << fe.ftotal3[i] << "\n";
			} else if(fe.fsubchoise3[i] == 4){
				cout << "\n\tv-nake t-shirt -> 445rs\n";
				cout << "\tSize : " << fe.fsize3[i] << "\n";
				cout << "\tTotal (price*quantity) : " << fe.ftotal3[i] << "\n";
			}
		}
	}    
	
	for(int i=0;i<4;i++){
		if(fe.fquantity4>0){
			if(fe.fsubchoise4[i] == 1){
				cout << "\n\tnight pants -> 540rs\n";
				cout << "\tSize : " << fe.fsize4[i] << "\n";
				cout << "\tTotal (price*quantity) : " << fe.ftotal4[i] << "\n";
			} else if(fe.fsubchoise4[i] == 2){
				cout << "\n\ttrack pants -> 540rs\n";
				cout << "\tSize : " << fe.fsize4[i] << "\n";
				cout << "\tTotal (price*quantity) : " << fe.ftotal4[i] << "\n";
			} else if(fe.fsubchoise4[i] == 3){
				cout << "\n\tbarmuda -> 540rs\n";
				cout << "\tSize : " << fe.fsize4[i] << "\n";
				cout << "\tTotal (price*quantity) : " << fe.ftotal4[i] << "\n";
			}
		}
	}
	
	if(ch.cquantity1[1]>0||ch.cquantity2[2]>0||ch.cquantity3[3]>0||ch.cquantity4[4]>0){
	cout << "\t----------------------------------------------------\n";
	cout << "\t|                  CHILDS                          |\n";
	cout << "\t----------------------------------------------------\n";
	}
	
	for(int i=0;i<4;i++){
		if(ch.cquantity1[i]>0){	
			if(ch.csubchoise1[i] == 1){
				cout << "\n\tcartoon theme suits -> 300rs\n";
				cout << "\tSize : " << ch.csize1[i] << "\n";
				cout << "\tTotal (price*quantity) : " << ch.ctotal1[i] << "\n";
			} else if(ch.csubchoise1[i] == 2){
				cout << "\n\tsimple solid coloured suits -> 300rs\n";
				cout << "\tSize : " << ch.csize1[i] << "\n";
				cout << "\tTotal (price*quantity) : " << ch.ctotal1[i] << "\n";
			} else if(ch.csubchoise1[i] == 3){
				cout << "\n\tdesigner soits -> 300rs\n";
				cout << "\tSize : " << ch.csize1[i] << "\n";
				cout << "\tTotal (price*quantity) : " << ch.ctotal1[i] << "\n";
			} 
		}	
	} 
	
	for(int i=0;i<4;i++){
		if(ch.cquantity2[i]>0){	
			if(ch.csubchoise2[i] == 1){
				cout << "\n\twhite jeans -> 340rs\n";
				cout << "\tSize : " << ch.csize2[i] << "\n";
				cout << "\tTotal (price*quantity) : " << ch.ctotal2[i] << "\n";
			} else if(ch.csubchoise2[i] == 2){
				cout << "\n\tblack jeans -> 340rs\n";
				cout << "\tSize : " << ch.csize2[i] << "\n";
				cout << "\tTotal (price*quantity) : " << ch.ctotal2[i] << "\n";
			} else if(ch.csubchoise2[i] == 3){
				cout << "\n\ttrendy jeans -> 340rs\n";
				cout << "\tSize : " << ch.csize2[i] << "\n";
				cout << "\tTotal (price*quantity) : " << ch.ctotal2[i] << "\n";
			} else if(ch.csubchoise2[i] == 4){
				cout << "\n\tshort jeans -> 340rs\n";
				cout << "\tSize : " << ch.csize2[i] << "\n";
				cout << "\tTotal (price*quantity) : " << ch.ctotal2[i] << "\n";
			}
		}
	}
	
	for(int i=0;i<4;i++){
		if(ch.cquantity3[i]>0){
			if(ch.csubchoise3[i] == 1){
				cout << "\n\thalf sleeves T-shirt -> 455rs\n";
				cout << "\tSize : " << ch.csize3[i] << "\n";
				cout << "\tTotal (price*quantity) : " << ch.ctotal3[i] << "\n";
			} else if(ch.csubchoise3[i] == 2){
				cout << "\n\tfull sleeves t-shirt -> 455rs\n";
				cout << "\tSize : " << ch.csize3[i] << "\n";
				cout << "\tTotal (price*quantity) : " << ch.ctotal3[i] << "\n";
			} else if(ch.csubchoise3[i] == 3){
				cout << "\n\thoodies -> 455rs\n";
				cout << "\tSize : " << ch.csize3[i] << "\n";
				cout << "\tTotal (price*quantity) : " << ch.ctotal3[i] << "\n";
			} else if(ch.csubchoise3[i] == 4){
				cout << "\n\tv-nake t-shirt -> 455rs\n";
				cout << "\tSize : " << ch.csize3[i] << "\n";
				cout << "\tTotal (price*quantity) : " << ch.ctotal3[i] << "\n";
			}
		}
	}    
	
	for(int i=0;i<4;i++){
		if(ch.cquantity4>0){
			if(ch.csubchoise4[i] == 1){
				cout << "\n\tnight pants -> 360rs\n";
				cout << "\tSize : " << ch.csize4[i] << "\n";
				cout << "\tTotal (price*quantity) : " << ch.ctotal4[i] << "\n";
			} else if(ch.csubchoise4[i] == 2){
				cout << "\n\ttrack pants -> 360rs\n";
				cout << "\tSize : " << ch.csize4[i] << "\n";
				cout << "\tTotal (price*quantity) : " << ch.ctotal4[i] << "\n";
			} else if(ch.csubchoise4[i] == 3){
				cout << "\n\tbarmuda -> 360rs\n";
				cout << "\tSize : " << ch.csize4[i] << "\n";
				cout << "\tTotal (price*quantity) : " << ch.ctotal4[i] << "\n";
			}
		}
	}
	cout << "\t----------------------------------------------------\n";
}

int main(){
	system("CLS");
	string pass,idd,pass1,id;
	
	cout << "\n\t--------------------------------------------------\n";
	cout << "\t|    INSTANT GARMENTS                            |";
	cout << "\n\t--------------------------------------------------\n";
	
	cout << "\n\t--------------------------------------------------\n";
	cout << "\t| SIGN IN                                        |";
	cout << "\n\t--------------------------------------------------\n\n";
	
	cout << "\tE-mail id       : " ;
	cin >> id;
	cout << "\tCreate Password : ";
	cin >> pass;
	
	cout << "\n\tSign-in successfully...\n";
	
	system("CLS");
	
	login:
		
	cout << "\n\t--------------------------------------------------\n";
	cout << "\t| LOGIN                                          |";
	cout << "\n\t--------------------------------------------------\n";
		
	cout << "\n\tEmail id  : ";
	cin >> idd;
	cout << "\tPassword  : " ;
	cin >> pass1;
	cout << "\n";
	
	if(pass == pass1 && id == idd){
		goto continuee;
	} else{
		cout << "\n\tWrong Password or Email id ?\n\n";
		goto login;
	}
	continuee:
	
	cout << "\n\tLogin successfully.... ";
	
	system("CLS");
	
	choisee:
		to:
			
	int type;
	
	cout << "\n\n\t-----------------------------------------------------------\n";
	cout << "\t|                      INSTANT CLOTHES                    |\n";
	cout << "\t-----------------------------------------------------------\n";	
	
	cout << "\n\tYou Are a (1)Man, (2)women or a (3)child ? : ";
	cin >> type;
	
	if(type == 1){
		man();
	} else if(type == 2){
		women();
	} else if(type == 3){
		childs();
	} else{
		cout << "\n\tWrong Input.\n";
		goto choisee;
	}
	
	sub:
		bb:
			
	cout << "\n\t-------------------------------------------------------\n";
	cout << "\t| Instant Garments                                    |\n";
	cout << "\t------------------------------------------------------\n";
	cout << "\t|  (1) Shop More                                     |\n";
	cout << "\t|  (2) See Cart                                      |\n";
	cout << "\t|  (3) Enter Payment Details                         |\n"; 
	cout << "\t|  (4) See Payment info                              |\n";
	cout << "\t|  (5) Exit                                          |\n";
	cout << "\t|  (6) Proceed                                       |\n";
	cout << "\t------------------------------------------------------\n";
	
	int subchoise;
	cout << "\tWhat is Your Next Step : ";
	cin >> subchoise;
	
	if(subchoise == 1){
		goto to;
	} else if(subchoise == 2){
		cart();
	} else if(subchoise == 3){
		paymentinfo();
	} else if(subchoise == 4){
		payout();
	} else if(subchoise == 5){
		exit(0);
	} else if(subchoise == 6){
		goto yt;
	} else{
		cout << "\n\tYou Enter Wrong Choise.\n";
		goto sub;
	}
	
	goto bb;
	
	yt:
	
	system("CLS");
		
	paymentinfo();
	
	cout << "\n\t---------------------------------------------------\n";
	cout << "\t|                 INSTANT CLOTHES                 |\n";
	cout << "\t---------------------------------------------------\n";

	payout();
	cart();
			
	cout << "\n\tYour Order conformed, it will deliver within 4-5 Days. \n";
	cout << "\tThanks For Visiting, Have a nice day !!\n";
	cout << "\tthank you.....";
	
	return 0;
}
