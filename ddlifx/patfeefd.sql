create table patfeepf
(
feecat      char(1),
feedesc     char(30),
feepcen     decimal(6,2),
feespare    char(14),
lf          char(1)
);
create unique index patfeep1 on patfeepf
(
feecat
);
revoke all on patfeepf from public ; 
grant select on patfeepf to public ; 
