create table tmpdbpaf
(
  tmdbrecn    varchar2(12) default ' ' not null,
  tmdbtcnt    varchar2(5) default ' ' not null,
  tmdbinvn    varchar2(12) default ' ' not null,
  tmdbilne    varchar2(3) default ' ' not null,
  tmdbpamt    number(14,2) default 0 not null,
  tmdbspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint tmpdbpa1 primary key( 
tmdbrecn,
tmdbtcnt,
tmdbinvn,
tmdbilne)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index tmpdbpa2 on tmpdbpaf
(
tmdbinvn,
tmdbilne,
tmdbrecn,
tmdbtcnt
)
  tablespace pas_indx; 
