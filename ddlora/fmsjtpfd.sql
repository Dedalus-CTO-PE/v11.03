create table fmsjtpaf
(
  fmjtjty     varchar2(1) default ' ' not null,
  fmjtjid     varchar2(6) default ' ' not null,
  fmjtper     varchar2(6) default ' ' not null,
  fmjtlno     varchar2(3) default ' ' not null,
  fmjtamt     number(14,2) default 0 not null,
  fmjtspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsjtpa1 primary key( 
fmjtjty,
fmjtjid,
fmjtper,
fmjtlno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index fmsjtpa2 on fmsjtpaf
(
fmjtjty,
fmjtjid,
fmjtlno,
fmjtper
)
  tablespace pas_indx; 
