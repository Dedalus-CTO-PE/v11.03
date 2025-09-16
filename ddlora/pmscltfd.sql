create table pmscltaf
(
  pmclwmod    varchar2(1) default ' ' not null,
  pmclinum    varchar2(8) default ' ' not null,
  pmclsnam    varchar2(40) default ' ' not null,
  pmclgnam    varchar2(40) default ' ' not null,
  pmclcdob    varchar2(8) default ' ' not null,
  pmclmcno    varchar2(10) default ' ' not null,
  pmclcmrf    varchar2(2) default ' ' not null,
  pmcladd1    varchar2(35) default ' ' not null,
  pmcladd2    varchar2(35) default ' ' not null,
  pmcladd3    varchar2(35) default ' ' not null,
  pmcladd4    varchar2(35) default ' ' not null,
  pmclpost    varchar2(8) default ' ' not null,
  pmclbnam    varchar2(30) default ' ' not null,
  pmclbacn    varchar2(30) default ' ' not null,
  pmclbbsb    varchar2(6) default ' ' not null,
  pmclspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsclta1 primary key( 
pmclwmod,
pmclinum)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
