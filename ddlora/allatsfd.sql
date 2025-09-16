create table allatsaf
(
  alattype    varchar2(10) default ' ' not null,
  alatdesc    varchar2(30) default ' ' not null,
  alatactv    varchar2(1) default ' ' not null,
  alatdept    varchar2(3) default ' ' not null,
  alatcdte    varchar2(8) default ' ' not null,
  alatfdte    varchar2(8) default ' ' not null,
  alatremd    varchar2(3) default ' ' not null,
  alatname    varchar2(18) default ' ' not null,
  alatcdat    varchar2(8) default ' ' not null,
  alatctim    varchar2(8) default ' ' not null,
  alatcuid    varchar2(10) default ' ' not null,
  alatudat    varchar2(8) default ' ' not null,
  alatutim    varchar2(8) default ' ' not null,
  alatuuid    varchar2(10) default ' ' not null,
  alatspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allatsa1 primary key( 
alatdept,
alattype)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
