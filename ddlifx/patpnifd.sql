create table patpniaf
(
dptpnhnu    char(2),
ptpnadno    char(8),
ptpnnmpi    char(20),
ptpnspar    char(9),
lf          char(1)
);
create unique index patpnia1 on patpniaf
(
dptpnhnu,
ptpnadno
);
create unique index patpnia2 on patpniaf
(
ptpnnmpi,
dptpnhnu,
ptpnadno
);
revoke all on patpniaf from public ; 
grant select on patpniaf to public ; 
