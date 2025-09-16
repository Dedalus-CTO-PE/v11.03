create table ibasecuf
(
  psecnme     varchar2(8) default ' ' not null,
  psecdesc    varchar2(30) default ' ' not null,
  pseclev     number(1,0) default 0 not null,
  psecpw      varchar2(8) default ' ' not null,
  ppaper      number(2,0) default 0 not null,
  psealias    varchar2(8) default ' ' not null,
  psecspar    varchar2(41) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ibasecu1 primary key( 
psecnme)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ibasecu2 on ibasecuf
(
psealias,
psecnme
)
  tablespace pas_indx; 
