int total_owed (int st, int end)
{
    if (end >=5 && end <=9){
        return (end-st)*12;
    }
    else if (end >=9 && end <=12){
        return (9-st)*12+(end-9)*8;
    }
    else if (end >=0 && end <=4){
        return (9-st)*12+(3)*8+(end)*16;
    }
    else
    {
        return 0;
    }
}
