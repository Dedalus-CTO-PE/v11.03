create table pmscltaf
(
  pmclwmod    char(1) default ' ' not null,
  pmclinum    char(8) default ' ' not null,
  pmclsnam    char(40) default ' ' not null,
  pmclgnam    char(40) default ' ' not null,
  pmclcdob    char(8) default ' ' not null,
  pmclmcno    char(10) default ' ' not null,
  pmclcmrf    char(2) default ' ' not null,
  pmcladd1    char(35) default ' ' not null,
  pmcladd2    char(35) default ' ' not null,
  pmcladd3    char(35) default ' ' not null,
  pmcladd4    char(35) default ' ' not null,
  pmclpost    char(8) default ' ' not null,
  pmclbnam    char(30) default ' ' not null,
  pmclbacn    char(30) default ' ' not null,
  pmclbbsb    char(6) default ' ' not null,
  pmclspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index pmsclta1 on pmscltaf
(
pmclwmod,
pmclinum
);
revoke all on pmscltaf from public ; 
grant select on pmscltaf to public ; 
