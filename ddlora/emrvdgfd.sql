create table emrvdgaf
(
  demvdadm    varchar2(8) default ' ' not null,
  emvdcode    varchar2(9) default ' ' not null,
  emvdprim    varchar2(1) default ' ' not null,
  emvdsend    varchar2(1) default ' ' not null,
  emvdspar    varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrvdga1 primary key( 
demvdadm,
emvdcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
