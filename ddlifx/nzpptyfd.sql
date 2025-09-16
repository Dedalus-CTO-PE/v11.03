create table nzpptyaf
(
nzptptyp    char(3),
nzptdesc    char(30),
nzptpind    char(1),
nzptcost    char(3),
nzptacod    char(5),
nzptscod    char(3),
nzptgstc    char(3),
nzptgsta    char(5),
nzptgsts    char(3),
nzptactv    char(1),
nzptcdat    char(8),
nzptctim    char(8),
nzptcuid    char(10),
nzptudat    char(8),
nzptutim    char(8),
nzptuuid    char(10),
nzptspar    char(50),
lf          char(1)
);
create unique index nzpptya1 on nzpptyaf
(
nzptptyp
);
create unique index nzpptya2 on nzpptyaf
(
nzptdesc,
nzptptyp
);
revoke all on nzpptyaf from public ; 
grant select on nzpptyaf to public ; 
