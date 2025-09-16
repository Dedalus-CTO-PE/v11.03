create table mehpmeaf
(
  mhpeercd    varchar2(9) default ' ' not null,
  mhpetype    varchar2(1) default ' ' not null,
  mhperefr    varchar2(25) default ' ' not null,
  mhpeemsg    varchar2(250) default ' ' not null,
  mhpespar    varchar2(14) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mehpmea1 primary key( 
mhpeercd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
