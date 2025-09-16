create table allrlnaf
(
  alrlvisn    varchar2(8) default ' ' not null,
  alrllnkv    varchar2(8) default ' ' not null,
  alrlcdat    varchar2(8) default ' ' not null,
  alrlctim    varchar2(8) default ' ' not null,
  alrlcuid    varchar2(10) default ' ' not null,
  alrlspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allrlna1 primary key( 
alrlvisn,
alrllnkv)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index allrlna2 on allrlnaf
(
alrllnkv,
alrlvisn
)
  tablespace pas_indx; 
