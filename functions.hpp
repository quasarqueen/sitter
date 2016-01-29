int total_owed (int st, int end)
{
    //start from 5-9
    if (st>=5 && st <=9 && end >=5 && end <=9){
        return (end-st)*12;
    }
    else if (st>=5 && st <=9 && end >=9 && end <=12){
        return (9-st)*12+(end-9)*8;
    }
    else if (st>=5 && st <=9 && end >=0 && end <=4){
        return (9-st)*12+(3)*8+(end)*16;
    }
    //start from 9-12
    else if (st>=9 && st <=12 && end >=9 && end <=12){
        return (end-st)*8;
    }
    else if (st>=9 && st <=12 && end >=0 && end <=4){
        return (12-st)*8+(end)*16;
    }
    //start from 12-4

    else if (st>=0 && st <=4 && end >=0 && end <=4){
        return (end-st)*16;
    }
    else
    {
        return 0;
    }
}
