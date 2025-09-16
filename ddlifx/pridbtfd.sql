create table priauddb
(
prdbaudd    char(8),
prdbaudt    char(8),
prdbaudp    char(2),
prdbaudr    char(1),
prdbauds    decimal(1,0),
prdbaudo    char(4),
prdbdebt    char(8),
prdbsnam    char(20),
prdbgnam    char(25),
prdbtitl    char(4),
prdbadd1    char(25),
prdbadd2    char(25),
prdbadd3    char(25),
prdbpost    char(4),
prdbtelp    char(12),
prdbtelb    char(12),
prdbposn    char(20),
prdbrnam    char(45),
prdbrad1    char(25),
prdbrad2    char(25),
prdbrad3    char(25),
prdbrpos    char(4),
prdbrtep    char(12),
prdbrteb    char(12),
prdbrrel    char(10),
prdbfund    char(6),
prdbtabl    char(8),
prdbmemn    char(10),
prdbextc    char(3),
prdbdcrt    decimal(14,2),
prdbmedn    char(10),
prdbbadd    decimal(1,0),
prdbhold    decimal(1,0),
prdbudf1    char(3),
prdbudf2    char(3),
prdbudf3    char(3),
prdbudf4    char(3),
prdblock    char(2),
prdbadmn    char(3),
prdbdobh    char(8),
prdbexur    char(8),
prdbspar    char(7),
lf          char(1)
);
create index priauddb on priauddb
(
prdbaudd,
prdbaudt,
prdbaudp,
prdbaudr
);
revoke all on priauddb from public ; 
grant select on priauddb to public ; 
create table pridebtf
(
prdbdebt    char(8),
prdbsnam    char(20),
prdbgnam    char(25),
prdbtitl    char(4),
prdbadd1    char(25),
prdbadd2    char(25),
prdbadd3    char(25),
prdbpost    char(4),
prdbtelp    char(12),
prdbtelb    char(12),
prdbposn    char(20),
prdbrnam    char(45),
prdbrad1    char(25),
prdbrad2    char(25),
prdbrad3    char(25),
prdbrpos    char(4),
prdbrtep    char(12),
prdbrteb    char(12),
prdbrrel    char(10),
prdbfund    char(6),
prdbtabl    char(8),
prdbmemn    char(10),
prdbextc    char(3),
prdbdcrt    decimal(14,2),
prdbmedn    char(10),
prdbbadd    decimal(1,0),
prdbhold    decimal(1,0),
prdbudf1    char(3),
prdbudf2    char(3),
prdbudf3    char(3),
prdbudf4    char(3),
prdblock    char(2),
prdbadmn    char(3),
prdbdobh    char(8),
prdbexur    char(8),
prdbspar    char(7),
lf          char(1)
);
create unique index pridebt1 on pridebtf
(
prdbdebt
);
create unique index pridebt2 on pridebtf
(
prdbsnam,
prdbgnam,
prdbdebt
);
revoke all on pridebtf from public ; 
grant select on pridebtf to public ; 
