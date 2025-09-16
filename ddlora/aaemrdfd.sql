create table aaemrdaf
(
  daemrevn    varchar2(8) default ' ' not null,
  aemrtype    varchar2(1) default ' ' not null,
  daemruni    varchar2(2) default ' ' not null,
  aemrcode    varchar2(6) default ' ' not null,
  aemrdtcc    varchar2(8) default ' ' not null,
  aemropcc    varchar2(4) default ' ' not null,
  aemrspar    varchar2(40) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint aaemrda1 primary key( 
daemrevn,
aemrtype,
daemruni)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
