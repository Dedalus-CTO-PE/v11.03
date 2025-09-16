create table patdasaf
(
dptdaref    char(2),
ptdadate    char(6),
ptdacode    char(3),
ptdaadlt    decimal(8,0),
ptdachld    decimal(8,0),
ptdamale    decimal(8,0),
ptdafeml    decimal(8,0),
ptdaunkn    decimal(8,0),
ptdaindt    decimal(8,0),
ptdaitsx    decimal(8,0),
ptdaspar    char(4),
lf          char(1)
);
create unique index patdasa1 on patdasaf
(
dptdaref,
ptdadate,
ptdacode
);
revoke all on patdasaf from public ; 
grant select on patdasaf to public ; 
