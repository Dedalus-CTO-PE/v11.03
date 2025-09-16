create table ibasauaf
(
  ibsauser    varchar2(5) default ' ' not null,
  ibsadate    varchar2(8) default ' ' not null,
  ibsatime    varchar2(8) default ' ' not null,
  ibsapass    varchar2(20) default ' ' not null,
  ibsaspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ibasaua1 primary key( 
ibsauser,
ibsadate,
ibsatime)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ibasaua2 on ibasauaf
(
ibsadate,
ibsatime,
ibsauser
)
  tablespace pas_indx; 
