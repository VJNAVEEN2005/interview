double a = 2.3;
    double b = 4;
    double c = 5.6;

    double d = pow(b,2) - (4*a*c);

    double ans1 , ans2;
    double cans1 , cans2;

    if(d == 0){
        cout<<"Roots are real and equale"<<endl;
        ans2 = ans1 = (-b / (2*a) );
        cout<<ans1<<endl<<ans2;
    } 
    else if (d > 0){
        cout<<"Roots are real and different"<<endl;
        ans1 = ((-b + sqrt(d)) / (2*a) );
        ans2 = ((-b - sqrt(d)) / (2*a) );
        cout<<ans1<<endl<<ans2;
    }
    else{
        cout<<"Roots are complex"<<endl;
        ans1 = (-b/(2*a));
        cans1 = sqrt(d) / (2*a);

        cout<<ans1<<"+i"<<cans1<<endl<<ans1<<"-i"<<cans1;
    }