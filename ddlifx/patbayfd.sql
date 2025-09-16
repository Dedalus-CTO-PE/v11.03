create table patbaysf
(
baycode     char(3),
bayur       char(2),
baydesc     char(20),
bayspar     char(6),
lf          char(1)
);
create unique index patbays1 on patbaysf
(
baycode,
bayur
);
create unique index patbays2 on patbaysf
(
bayur,
baycode
);
revoke all on patbaysf from public ; 
grant select on patbaysf to public ; 
