create table mrtpdsaf
(
dmrpdadm    char(8),
mrpddoct    char(6),
mrpdstat    char(3),
mrpddate    char(8),
mrpdtime    char(5),
mrpdrmor    char(3),
mrpdspar    char(37),
lf          char(1)
);
create unique index mrtpdsa1 on mrtpdsaf
(
dmrpdadm
);
revoke all on mrtpdsaf from public ; 
grant select on mrtpdsaf to public ; 
