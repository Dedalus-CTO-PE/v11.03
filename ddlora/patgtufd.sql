create table patgtuaf
(
  dptgtadm    varchar2(8) default ' ' not null,
  ptgtgsta    number(1,0) default 0 not null,
  ptgtgstm    number(1,0) default 0 not null,
  ptgtspar    varchar2(27) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patgtua1 primary key( 
dptgtadm)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
