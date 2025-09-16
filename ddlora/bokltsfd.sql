create table bokltsaf
(
  bklsseid    varchar2(4) default ' ' not null,
  bklsdesc    varchar2(35) default ' ' not null,
  bklsdeps    varchar2(1) default ' ' not null,
  bklsstdt    varchar2(8) default ' ' not null,
  bklsendt    varchar2(8) default ' ' not null,
  bklsspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint bokltsa1 primary key( 
bklsseid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
