create table vispayaf
(
vspavisn    char(8),
vspapayc    char(6),
vspaseqn    char(2),
vspacomm    char(30),
vspaactv    char(1),
vspaisen    decimal(1,0),
vspacdat    char(8),
vspactim    char(8),
vspacuid    char(10),
vspaudat    char(8),
vspautim    char(8),
vspauuid    char(10),
vspaspar    char(50),
lf          char(1)
);
create unique index vispaya1 on vispayaf
(
vspavisn,
vspapayc
);
create unique index vispaya2 on vispayaf
(
vspavisn,
vspaseqn
);
revoke all on vispayaf from public ; 
grant select on vispayaf to public ; 
