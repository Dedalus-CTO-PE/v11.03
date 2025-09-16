create table ccigdpaf
(
  dccgdtyp    varchar2(3) default ' ' not null,
  ccgdcod1    varchar2(9) default ' ' not null,
  ccgdcod2    varchar2(9) default ' ' not null,
  ccgddept    varchar2(3) default ' ' not null,
  ccgdspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccigdpa1 primary key( 
dccgdtyp,
ccgdcod1,
ccgdcod2)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
