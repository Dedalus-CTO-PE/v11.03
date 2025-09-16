create table allgrpaf
(
  algpsesn    varchar2(8) default ' ' not null,
  algpurno    varchar2(8) default ' ' not null,
  algprefn    varchar2(8) default ' ' not null,
  algpactv    varchar2(1) default ' ' not null,
  algpcdat    varchar2(8) default ' ' not null,
  algpctim    varchar2(8) default ' ' not null,
  algpcuid    varchar2(10) default ' ' not null,
  algpudat    varchar2(8) default ' ' not null,
  algputim    varchar2(8) default ' ' not null,
  algpuuid    varchar2(10) default ' ' not null,
  algpspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allgrpa1 primary key( 
algpsesn,
algprefn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index allgrpa2 on allgrpaf
(
algpsesn,
algpurno,
algpactv,
algprefn
)
  tablespace pas_indx; 
create unique index allgrpa3 on allgrpaf
(
algpurno,
algpsesn,
algprefn
)
  tablespace pas_indx; 
