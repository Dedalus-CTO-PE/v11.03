create table patrblaf
(
ptrbadmn    varchar2(8),
ptrbinvn    varchar2(8),
ptrbbrcd    varchar2(3),
ptrbamnt    number(14,2),
ptrbgamn    number(14,2),
ptrbbtch    varchar2(5),
ptrbspar    varchar2(17),
lf          varchar2(1),
constraint patrbla1 primary key( 
ptrbadmn,
ptrbinvn,
ptrbbrcd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym patrblaf for patrblaf;
