create table pmssgaaf
(
pmsgclmn    char(3),
pmsghfnd    char(6),
pmsghftb    char(8),
pmsgicdc    char(9),
pmsgclss    char(3),
pmsgspar    char(50),
lf          char(1)
);
create unique index pmssgaa1 on pmssgaaf
(
pmsgclmn,
pmsghfnd,
pmsghftb,
pmsgicdc
);
revoke all on pmssgaaf from public ; 
grant select on pmssgaaf to public ; 
