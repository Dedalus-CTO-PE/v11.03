create table allmedaf
(
  almecode    varchar2(20) default ' ' not null,
  almedesc    varchar2(60) default ' ' not null,
  almeactv    varchar2(1) default ' ' not null,
  almeunit    varchar2(3) default ' ' not null,
  almegenr    varchar2(1) default ' ' not null,
  almemedr    varchar2(3) default ' ' not null,
  almeivad    varchar2(1) default ' ' not null,
  almeinvc    varchar2(7) default ' ' not null,
  almemedt    varchar2(3) default ' ' not null,
  almespar    varchar2(70) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allmeda1 primary key( 
almecode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
