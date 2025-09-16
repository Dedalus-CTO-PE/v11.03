create table patdadaf
(
dptdaadm    char(8),
ptdaadts    char(5),
ptdadcts    char(5),
ptdaspar    char(11),
lf          char(1)
);
create unique index patdada1 on patdadaf
(
dptdaadm
);
revoke all on patdadaf from public ; 
grant select on patdadaf to public ; 
