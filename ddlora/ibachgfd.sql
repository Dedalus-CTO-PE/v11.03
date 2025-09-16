create table ibachgaf
(
  ibchchrg    varchar2(3) default ' ' not null,
  ibchrate    number(5,2) default 0 not null,
  ibchspar    varchar2(22) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ibachga1 primary key( 
ibchchrg)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
