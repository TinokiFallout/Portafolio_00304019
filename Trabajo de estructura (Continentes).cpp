#include <iostream>
using namespace std;

struct ContinentePais{
	char continente[20];
	char nombre[20];
	char capital[20];
	double habitantes;
} 
cont1, cont2, cont3, cont4, cont5,
pais1, pais2, pais3, pais4, pais5, pais6, pais7, pais8,pais9, pais10, pais11, pais12, pais13, pais14, pais15, pais16, pais17, pais18, pais19, pais20, pais21, pais22, pais23, pais24, pais25,
cap1, cap2, cap3, cap4, cap5, cap6, cap7, cap8, cap9, cap10, cap11, cap12, cap13, cap14, cap15, cap16, cap17, cap18, cap19, cap20, cap21, cap22, cap23, cap24, cap25,
habit1, habit2, habit3, habit4, habit5, habit6, habit7, habit8, habit9, habit10, habit11, habit12, habit13, habit14, habit15, habit16, habit17, habit18, habit19, habit20, habit21, habit22, habit23, habit24, habit25;

int main () 
{
	//primer continente
	
	int suma;
	
	cout<<"Digite el nombre del primer continente:"<<endl; cin>> cont1.nombre;
	cout<<"\nDigite el nombre del primer pais:"<<endl; cin>> pais1.nombre;
	cout<<"\nDigite el nombre del segundo pais:"<<endl; cin>> pais2.nombre;
	cout<<"\nDigite el nombre del tercer pais:"<<endl; cin>> pais3.nombre;
	cout<<"\nDigite el nombre del cuarto pais:"<<endl; cin>> pais4.nombre;
	cout<<"\nDigite el nombre del quinto pais:"<<endl; cin>> pais5.nombre;

	cout<<"\nDigite la capital del primer pais:"<<endl; cin>> cap1.capital;
	cout<<"\nDigite la capital del segundo pais:"<<endl; cin>> cap2.capital;
	cout<<"\nDigite la capital del tercer pais:"<<endl; cin>> cap3.capital;
	cout<<"\nDigite la capital del cuarto pais:"<<endl; cin>> cap4.capital;
	cout<<"\nDigite la capital del quinto pais:"<<endl; cin>> cap5.capital;

	cout<<"\nDigite el numero de habitantes del primer pais:"<<endl; cin>> habit1.habitantes;
	cout<<"\nDigite el numero de habitantes del segundo pais:"<<endl; cin>> habit2.habitantes;
	cout<<"\nDigite el numero de habitantes del tercer pais:"<<endl; cin>> habit3.habitantes;
	cout<<"\nDigite el numero de habitantes del cuarto pais:"<<endl; cin>> habit4.habitantes;
	cout<<"\nDigite el numero de habitantes del quinto pais:"<<endl; cin>> habit5.habitantes;


    cout<<"El pais es: "<<pais1.nombre<<endl;
    cout<<"La capital es: "<<cap1.capital<<endl;
    cout<<"Los habitantes son:"<<habit1.habitantes<<endl;
    
    cout<<"\nEl pais es: "<<pais2.nombre<<endl;
    cout<<"La capital es: "<<cap2.capital<<endl;
    cout<<"Los habitantes son:"<<habit2.habitantes<<endl;
    
    cout<<"\nEl pais es: "<<pais3.nombre<<endl;
    cout<<"La capital es: "<<cap3.capital<<endl;
    cout<<"Los habitantes son:"<<habit3.habitantes<<endl;
    
    cout<<"\nEl pais es: "<<pais4.nombre<<endl;
    cout<<"La capital es: "<<cap4.capital<<endl;
    cout<<"Los habitantes son:"<<habit4.habitantes<<endl;
    
    cout<<"\nEl pais es: "<<pais5.nombre<<endl;
    cout<<"La capital es: "<<cap5.capital<<endl;
    cout<<"Los habitantes son:"<<habit5.habitantes<<endl;
    
    suma = habit1.habitantes+habit2.habitantes+habit3.habitantes+habit4.habitantes+habit5.habitantes;
	cout<<"\nLa suma de todos los habitantes son: "<<suma<<endl;
  
  int X,habit1habitantes,habit2habitantes,habit3habitantes,habit4habitantes,habit5habitantes;
  
       if(habit1.habitantes > habit2.habitantes && habit1.habitantes > habit3.habitantes && habit1.habitantes > habit4.habitantes && habit1.habitantes > habit5.habitantes){
            X = habit1.habitantes;
        }else{
            if(habit2.habitantes > habit1.habitantes && habit2.habitantes > habit3.habitantes && habit2.habitantes > habit4.habitantes && habit2.habitantes > habit5.habitantes){
                X = habit2.habitantes;
            }else{
                if(habit3.habitantes > habit1.habitantes && habit3.habitantes > habit2.habitantes && habit3.habitantes > habit4.habitantes && habit3.habitantes > habit5.habitantes){
                    X = habit3.habitantes;
                }else{
                    if(habit4.habitantes > habit1.habitantes && habit4.habitantes > habit2.habitantes && habit4.habitantes > habit4.habitantes && habit4.habitantes > habit5.habitantes){
                        X = habit4.habitantes;
                }else
                    X = habit5.habitantes;
            }
            }
        }
  cout<<"\nla capital que tiene la mayor poblacion es: "<<X<<endl;
  
  //Segundo continente
  	int suma2;
  
	cout<<"\n\nDigite el nombre del segundo continente:"<<endl; cin>> cont2.nombre;
	cout<<"\nDigite el nombre del primer pais:"<<endl; cin>> pais6.nombre;
	cout<<"\nDigite el nombre del segundo pais:"<<endl; cin>> pais7.nombre;
	cout<<"\nDigite el nombre del tercer pais:"<<endl; cin>> pais8.nombre;
	cout<<"\nDigite el nombre del cuarto pais:"<<endl; cin>> pais9.nombre;
	cout<<"\nDigite el nombre del quinto pais:"<<endl; cin>> pais10.nombre;

	cout<<"\nDigite la capital del primer pais:"<<endl; cin>> cap6.capital;
	cout<<"\nDigite la capital del segundo pais:"<<endl; cin>> cap7.capital;
	cout<<"\nDigite la capital del tercer pais:"<<endl; cin>> cap8.capital;
	cout<<"\nDigite la capital del cuarto pais:"<<endl; cin>> cap9.capital;
	cout<<"\nDigite la capital del quinto pais:"<<endl; cin>> cap10.capital;

	cout<<"\nDigite el numero de habitantes del primer pais:"<<endl; cin>> habit6.habitantes;
	cout<<"\nDigite el numero de habitantes del segundo pais:"<<endl; cin>> habit7.habitantes;
	cout<<"\nDigite el numero de habitantes del tercer pais:"<<endl; cin>> habit8.habitantes;
	cout<<"\nDigite el numero de habitantes del cuarto pais:"<<endl; cin>> habit9.habitantes;
	cout<<"\nDigite el numero de habitantes del quinto pais:"<<endl; cin>> habit10.habitantes;


    cout<<"El pais es: "<<pais6.nombre<<endl;
    cout<<"La capital es: "<<cap6.capital<<endl;
    cout<<"Los habitantes son:"<<habit6.habitantes<<endl;
    
    cout<<"\nEl pais es: "<<pais7.nombre<<endl;
    cout<<"La capital es: "<<cap7.capital<<endl;
    cout<<"Los habitantes son:"<<habit7.habitantes<<endl;
    
    cout<<"\nEl pais es: "<<pais8.nombre<<endl;
    cout<<"La capital es: "<<cap8.capital<<endl;
    cout<<"Los habitantes son:"<<habit8.habitantes<<endl;
    
    cout<<"\nEl pais es: "<<pais9.nombre<<endl;
    cout<<"La capital es: "<<cap9.capital<<endl;
    cout<<"Los habitantes son:"<<habit9.habitantes<<endl;
    
    cout<<"\nEl pais es: "<<pais10.nombre<<endl;
    cout<<"La capital es: "<<cap10.capital<<endl;
    cout<<"Los habitantes son:"<<habit10.habitantes<<endl;
    
    suma2 = habit6.habitantes+habit7.habitantes+habit8.habitantes+habit9.habitantes+habit10.habitantes;
	cout<<"\nLa suma de todos los habitantes son: "<<suma2<<endl;
  
  int y,habit6habitantes,habit7habitantes,habit8habitantes,habit9habitantes,habit10habitantes;
  
       if(habit6.habitantes > habit7.habitantes && habit6.habitantes > habit8.habitantes && habit6.habitantes > habit9.habitantes && habit6.habitantes > habit10.habitantes){
            y = habit6.habitantes;
        }else{
            if(habit7.habitantes > habit6.habitantes && habit7.habitantes > habit8.habitantes && habit6.habitantes > habit9.habitantes && habit7.habitantes > habit10.habitantes){
                y = habit7.habitantes;
            }else{
                if(habit8.habitantes > habit6.habitantes && habit8.habitantes > habit7.habitantes && habit8.habitantes > habit9.habitantes && habit8.habitantes > habit10.habitantes){
                    y = habit8.habitantes;
                }else{
                    if(habit9.habitantes > habit6.habitantes && habit9.habitantes > habit7.habitantes && habit9.habitantes > habit9.habitantes && habit9.habitantes > habit10.habitantes){
                        y = habit9.habitantes;
                }else
                    y = habit10.habitantes;
            }
            }
        }
  cout<<"\nla capital que tiene la mayor poblacion es: "<<y;
  
  		//Tercer continente
  		
    int suma3;
  
	cout<<"\n\nDigite el nombre del segundo continente:"<<endl; cin>> cont3.nombre;
	cout<<"\nDigite el nombre del primer pais:"<<endl; cin>> pais11.nombre;
	cout<<"\nDigite el nombre del segundo pais:"<<endl; cin>> pais12.nombre;
	cout<<"\nDigite el nombre del tercer pais:"<<endl; cin>> pais13.nombre;
	cout<<"\nDigite el nombre del cuarto pais:"<<endl; cin>> pais14.nombre;
	cout<<"\nDigite el nombre del quinto pais:"<<endl; cin>> pais15.nombre;

	cout<<"\nDigite la capital del primer pais:"<<endl; cin>> cap11.capital;
	cout<<"\nDigite la capital del segundo pais:"<<endl; cin>> cap12.capital;
	cout<<"\nDigite la capital del tercer pais:"<<endl; cin>> cap13.capital;
	cout<<"\nDigite la capital del cuarto pais:"<<endl; cin>> cap14.capital;
	cout<<"\nDigite la capital del quinto pais:"<<endl; cin>> cap15.capital;

	cout<<"\nDigite el numero de habitantes del primer pais:"<<endl; cin>> habit11.habitantes;
	cout<<"\nDigite el numero de habitantes del segundo pais:"<<endl; cin>> habit12.habitantes;
	cout<<"\nDigite el numero de habitantes del tercer pais:"<<endl; cin>> habit13.habitantes;
	cout<<"\nDigite el numero de habitantes del cuarto pais:"<<endl; cin>> habit14.habitantes;
	cout<<"\nDigite el numero de habitantes del quinto pais:"<<endl; cin>> habit15.habitantes;


    cout<<"El pais es: "<<pais11.nombre<<endl;
    cout<<"La capital es: "<<cap11.capital<<endl;
    cout<<"Los habitantes son:"<<habit11.habitantes<<endl;
    
    cout<<"\nEl pais es: "<<pais12.nombre<<endl;
    cout<<"La capital es: "<<cap12.capital<<endl;
    cout<<"Los habitantes son:"<<habit12.habitantes<<endl;
    
    cout<<"\nEl pais es: "<<pais13.nombre<<endl;
    cout<<"La capital es: "<<cap13.capital<<endl;
    cout<<"Los habitantes son:"<<habit13.habitantes<<endl;
    
    cout<<"\nEl pais es: "<<pais14.nombre<<endl;
    cout<<"La capital es: "<<cap14.capital<<endl;
    cout<<"Los habitantes son:"<<habit14.habitantes<<endl;
    
    cout<<"\nEl pais es: "<<pais15.nombre<<endl;
    cout<<"La capital es: "<<cap15.capital<<endl;
    cout<<"Los habitantes son:"<<habit15.habitantes<<endl;
    
    suma3 = habit11.habitantes+habit12.habitantes+habit13.habitantes+habit14.habitantes+habit15.habitantes;
	cout<<"\nLa suma de todos los habitantes son: "<<suma3<<endl;
  
  int z,habit11habitantes,habit12habitantes,habit13habitantes,habit14habitantes,habit15habitantes;
  
       if(habit11.habitantes > habit12.habitantes && habit11.habitantes > habit13.habitantes && habit11.habitantes > habit14.habitantes && habit11.habitantes > habit15.habitantes){
            z = habit11.habitantes;
        }else{
            if(habit12.habitantes > habit11.habitantes && habit12.habitantes > habit13.habitantes && habit12.habitantes > habit14.habitantes && habit12.habitantes > habit15.habitantes){
                z = habit12.habitantes;
            }else{
                if(habit13.habitantes > habit11.habitantes && habit13.habitantes > habit12.habitantes && habit13.habitantes > habit14.habitantes && habit13.habitantes > habit15.habitantes){
                    z = habit13.habitantes;
                }else{
                    if(habit14.habitantes > habit11.habitantes && habit14.habitantes > habit12.habitantes && habit14.habitantes > habit14.habitantes && habit14.habitantes > habit15.habitantes){
                        z = habit14.habitantes;
                }else
                    z = habit15.habitantes;
            }
            }
        }
  cout<<"\nla capital que tiene la mayor poblacion es: "<<z;
  
	//cuarto continente
	
	int suma4;
	
	cout<<"\n\nDigite el nombre del primer continente:"<<endl; cin>> cont4.nombre;
	cout<<"\nDigite el nombre del primer pais:"<<endl; cin>> pais16.nombre;
	cout<<"\nDigite el nombre del segundo pais:"<<endl; cin>> pais17.nombre;
	cout<<"\nDigite el nombre del tercer pais:"<<endl; cin>> pais18.nombre;
	cout<<"\nDigite el nombre del cuarto pais:"<<endl; cin>> pais19.nombre;
	cout<<"\nDigite el nombre del quinto pais:"<<endl; cin>> pais20.nombre;

	cout<<"\nDigite la capital del primer pais:"<<endl; cin>> cap16.capital;
	cout<<"\nDigite la capital del segundo pais:"<<endl; cin>> cap17.capital;
	cout<<"\nDigite la capital del tercer pais:"<<endl; cin>> cap18.capital;
	cout<<"\nDigite la capital del cuarto pais:"<<endl; cin>> cap19.capital;
	cout<<"\nDigite la capital del quinto pais:"<<endl; cin>> cap20.capital;

	cout<<"\nDigite el numero de habitantes del primer pais:"<<endl; cin>> habit16.habitantes;
	cout<<"\nDigite el numero de habitantes del segundo pais:"<<endl; cin>> habit17.habitantes;
	cout<<"\nDigite el numero de habitantes del tercer pais:"<<endl; cin>> habit18.habitantes;
	cout<<"\nDigite el numero de habitantes del cuarto pais:"<<endl; cin>> habit19.habitantes;
	cout<<"\nDigite el numero de habitantes del quinto pais:"<<endl; cin>> habit20.habitantes;


    cout<<"El pais es: "<<pais16.nombre<<endl;
    cout<<"La capital es: "<<cap16.capital<<endl;
    cout<<"Los habitantes son:"<<habit16.habitantes<<endl;
    
    cout<<"\nEl pais es: "<<pais17.nombre<<endl;
    cout<<"La capital es: "<<cap17.capital<<endl;
    cout<<"Los habitantes son:"<<habit17.habitantes<<endl;
    
    cout<<"\nEl pais es: "<<pais18.nombre<<endl;
    cout<<"La capital es: "<<cap18.capital<<endl;
    cout<<"Los habitantes son:"<<habit18.habitantes<<endl;
    
    cout<<"\nEl pais es: "<<pais19.nombre<<endl;
    cout<<"La capital es: "<<cap19.capital<<endl;
    cout<<"Los habitantes son:"<<habit19.habitantes<<endl;
    
    cout<<"\nEl pais es: "<<pais20.nombre<<endl;
    cout<<"La capital es: "<<cap20.capital<<endl;
    cout<<"Los habitantes son:"<<habit20.habitantes<<endl;
    
    suma4 = habit16.habitantes+habit2.habitantes+habit3.habitantes+habit4.habitantes+habit5.habitantes;
	cout<<"\nLa suma de todos los habitantes son: "<<suma4<<endl;
  
  int h,habit16habitantes,habit17habitantes,habit18habitantes,habit19habitantes,habit20habitantes;
  
       if(habit16.habitantes > habit17.habitantes && habit16.habitantes > habit18.habitantes && habit16.habitantes > habit19.habitantes && habit16.habitantes > habit20.habitantes){
            h = habit1.habitantes;
        }else{
            if(habit17.habitantes > habit16.habitantes && habit17.habitantes > habit18.habitantes && habit17.habitantes > habit19.habitantes && habit17.habitantes > habit20.habitantes){
                h = habit2.habitantes;
            }else{
                if(habit18.habitantes > habit16.habitantes && habit18.habitantes > habit17.habitantes && habit18.habitantes > habit19.habitantes && habit18.habitantes > habit20.habitantes){
                    h = habit3.habitantes;
                }else{
                    if(habit19.habitantes > habit16.habitantes && habit19.habitantes > habit17.habitantes && habit19.habitantes > habit19.habitantes && habit19.habitantes > habit20.habitantes){
                        h = habit4.habitantes;
                }else
                    h = habit20.habitantes;
            }
            }
        }
  cout<<"\nla capital que tiene la mayor poblacion es: "<<h;
  
  
  //quinto continente
	
	int suma5;
	
	cout<<"\n\nDigite el nombre del primer continente:"<<endl; cin>> cont5.nombre;
	cout<<"\nDigite el nombre del primer pais:"<<endl; cin>> pais21.nombre;
	cout<<"\nDigite el nombre del segundo pais:"<<endl; cin>> pais22.nombre;
	cout<<"\nDigite el nombre del tercer pais:"<<endl; cin>> pais23.nombre;
	cout<<"\nDigite el nombre del cuarto pais:"<<endl; cin>> pais24.nombre;
	cout<<"\nDigite el nombre del quinto pais:"<<endl; cin>> pais25.nombre;

	cout<<"\nDigite la capital del primer pais:"<<endl; cin>> cap21.capital;
	cout<<"\nDigite la capital del segundo pais:"<<endl; cin>> cap22.capital;
	cout<<"\nDigite la capital del tercer pais:"<<endl; cin>> cap23.capital;
	cout<<"\nDigite la capital del cuarto pais:"<<endl; cin>> cap24.capital;
	cout<<"\nDigite la capital del quinto pais:"<<endl; cin>> cap25.capital;

	cout<<"\nDigite el numero de habitantes del primer pais:"<<endl; cin>> habit21.habitantes;
	cout<<"\nDigite el numero de habitantes del segundo pais:"<<endl; cin>> habit22.habitantes;
	cout<<"\nDigite el numero de habitantes del tercer pais:"<<endl; cin>> habit23.habitantes;
	cout<<"\nDigite el numero de habitantes del cuarto pais:"<<endl; cin>> habit24.habitantes;
	cout<<"\nDigite el numero de habitantes del quinto pais:"<<endl; cin>> habit25.habitantes;


    cout<<"El pais es: "<<pais21.nombre<<endl;
    cout<<"La capital es: "<<cap21.capital<<endl;
    cout<<"Los habitantes son:"<<habit21.habitantes<<endl;
    
    cout<<"\nEl pais es: "<<pais22.nombre<<endl;
    cout<<"La capital es: "<<cap22.capital<<endl;
    cout<<"Los habitantes son:"<<habit22.habitantes<<endl;
    
    cout<<"\nEl pais es: "<<pais23.nombre<<endl;
    cout<<"La capital es: "<<cap23.capital<<endl;
    cout<<"Los habitantes son:"<<habit23.habitantes<<endl;
    
    cout<<"\nEl pais es: "<<pais24.nombre<<endl;
    cout<<"La capital es: "<<cap24.capital<<endl;
    cout<<"Los habitantes son:"<<habit24.habitantes<<endl;
    
    cout<<"\nEl pais es: "<<pais25.nombre<<endl;
    cout<<"La capital es: "<<cap25.capital<<endl;
    cout<<"Los habitantes son:"<<habit25.habitantes<<endl;
    
    suma5 = habit21.habitantes+habit22.habitantes+habit23.habitantes+habit24.habitantes+habit25.habitantes;
	cout<<"\nLa suma de todos los habitantes son: "<<suma5<<endl;
  
  int m,habit21habitantes,habit22habitantes,habit23habitantes,habit24habitantes,habit25habitantes;
  
       if(habit21.habitantes > habit22.habitantes && habit21.habitantes > habit23.habitantes && habit21.habitantes > habit24.habitantes && habit21.habitantes > habit25.habitantes){
            m = habit21.habitantes;
        }else{
            if(habit22.habitantes > habit21.habitantes && habit22.habitantes > habit23.habitantes && habit22.habitantes > habit24.habitantes && habit22.habitantes > habit25.habitantes){
                m = habit22.habitantes;
            }else{
                if(habit23.habitantes > habit21.habitantes && habit23.habitantes > habit22.habitantes && habit23.habitantes > habit24.habitantes && habit23.habitantes > habit25.habitantes){
                    m = habit23.habitantes;
                }else{
                    if(habit24.habitantes > habit21.habitantes && habit24.habitantes > habit22.habitantes && habit24.habitantes > habit24.habitantes && habit24.habitantes > habit25.habitantes){
                        m = habit24.habitantes;
                }else
                    m = habit25.habitantes;
            }
            }
        }
  cout<<"\nla capital que tiene la mayor poblacion es: "<<m;
  
	

	return 0;
}
