create table patlueaf
(
  ptluoper    varchar2(4) default ' ' not null,
  ptluurno    varchar2(8) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patluea1 primary key( 
ptluoper)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
