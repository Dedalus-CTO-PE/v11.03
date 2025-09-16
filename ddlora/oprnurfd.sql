create table oprnuraf
(
  opnrcode    varchar2(6) default ' ' not null,
  opnrsnam    varchar2(30) default ' ' not null,
  opnrgnam    varchar2(30) default ' ' not null,
  opnrusr1    varchar2(3) default ' ' not null,
  opnrusr2    varchar2(3) default ' ' not null,
  opnrusr3    varchar2(3) default ' ' not null,
  opnrusr4    varchar2(3) default ' ' not null,
  opnrusr5    varchar2(3) default ' ' not null,
  opnrstat    number(1,0) default 0 not null,
  opnrspar    varchar2(16) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprnura1 primary key( 
opnrcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index oprnura2 on oprnuraf
(
opnrsnam,
opnrgnam,
opnrcode
)
  tablespace pas_indx; 
