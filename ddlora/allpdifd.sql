create table allpdiaf
(
  alpdrdep    varchar2(3) default ' ' not null,
  alpdreas    varchar2(9) default ' ' not null,
  alpddesc    varchar2(40) default ' ' not null,
  alpdicd     varchar2(9) default ' ' not null,
  alpdactv    varchar2(1) default ' ' not null,
  alpdcdat    varchar2(8) default ' ' not null,
  alpdctim    varchar2(8) default ' ' not null,
  alpdcuid    varchar2(10) default ' ' not null,
  alpdudat    varchar2(8) default ' ' not null,
  alpdutim    varchar2(8) default ' ' not null,
  alpduuid    varchar2(10) default ' ' not null,
  alpdspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allpdia1 primary key( 
alpdrdep,
alpdreas)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index allpdia2 on allpdiaf
(
alpdrdep,
alpddesc,
alpdreas
)
  tablespace pas_indx; 
