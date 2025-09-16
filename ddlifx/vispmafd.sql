create table vispmaaf
(
vspmvisn    char(8),
vspmpayc    char(6),
vspmmacn    char(15),
vspmmnam    char(60),
vspmrltp    char(2),
vspmmpid    char(17),
vspmmpit    char(2),
vspmmad1    char(35),
vspmmad2    char(35),
vspmmad3    char(35),
vspmmad4    char(35),
vspmmpcd    char(10),
vspmeamt    decimal(14,2),
vspmepec    decimal(3,0),
vspmcdat    char(8),
vspmctim    char(8),
vspmcuid    char(10),
vspmudat    char(8),
vspmutim    char(8),
vspmuuid    char(10),
vspmspar    char(26),
lf          char(1)
);
create unique index vispmaa1 on vispmaaf
(
vspmvisn,
vspmmacn
);
create unique index vispmaa2 on vispmaaf
(
vspmvisn,
vspmpayc,
vspmmacn
);
revoke all on vispmaaf from public ; 
grant select on vispmaaf to public ; 
