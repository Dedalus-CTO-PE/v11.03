create table mrtpdsaf
(
  dmrpdadm    varchar2(8) default ' ' not null,
  mrpddoct    varchar2(6) default ' ' not null,
  mrpdstat    varchar2(3) default ' ' not null,
  mrpddate    varchar2(8) default ' ' not null,
  mrpdtime    varchar2(5) default ' ' not null,
  mrpdrmor    varchar2(3) default ' ' not null,
  mrpdspar    varchar2(37) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mrtpdsa1 primary key( 
dmrpdadm)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
