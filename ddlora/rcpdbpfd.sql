create table rcpdbpaf
(
  rcdbrecn    varchar2(12) default ' ' not null,
  rcdbtcnt    varchar2(5) default ' ' not null,
  rcdbinvn    varchar2(12) default ' ' not null,
  rcdbilne    varchar2(3) default ' ' not null,
  rcdbpamt    number(14,2) default 0 not null,
  rcdbspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint rcpdbpa1 primary key( 
rcdbrecn,
rcdbtcnt,
rcdbinvn,
rcdbilne)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index rcpdbpa2 on rcpdbpaf
(
rcdbinvn,
rcdbilne,
rcdbrecn,
rcdbtcnt
)
  tablespace pas_indx; 
