create table outaudui
(
otuiaudd    char(8),
otuiaudt    char(8),
otuiaudp    char(2),
otuiaudr    char(1),
otuiauds    decimal(1,0),
otuiaudo    char(4),
otuisite    char(6),
otuitype    char(6),
otuiclin    char(6),
otuiteam    char(6),
otuisdat    char(8),
otuiedat    char(8),
otuispar    char(40),
lf          char(1)
);
create index outaudui on outaudui
(
otuiaudd,
otuiaudt,
otuiaudp,
otuiaudr
);
revoke all on outaudui from public ; 
grant select on outaudui to public ; 
create table outuniaf
(
otuisite    char(6),
otuitype    char(6),
otuiclin    char(6),
otuiteam    char(6),
otuisdat    char(8),
otuiedat    char(8),
otuispar    char(40),
lf          char(1)
);
create unique index outunia1 on outuniaf
(
otuisite,
otuitype,
otuiclin
);
create unique index outunia2 on outuniaf
(
otuisite,
otuiclin,
otuitype
);
create unique index outunia3 on outuniaf
(
otuiteam,
otuisite,
otuitype,
otuiclin
);
revoke all on outuniaf from public ; 
grant select on outuniaf to public ; 
