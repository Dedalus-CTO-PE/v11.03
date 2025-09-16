create table patbnkd
(
kdate       char(8),
krectyp     char(3),
dkpaytyp    char(1),
ptbdamou    decimal(14,2),
ptbdspar    char(9),
lf          char(1)
);
create unique index patbnk1 on patbnkd
(
kdate,
krectyp,
dkpaytyp
);
revoke all on patbnkd from public ; 
grant select on patbnkd to public ; 
