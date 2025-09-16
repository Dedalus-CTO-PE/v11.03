create table webpcpaf
(
  wbpccode    varchar2(3) default ' ' not null,
  wbpccpid    varchar2(3) default ' ' not null,
  wbpcscid    varchar2(3) default ' ' not null,
  wbpccvid    varchar2(1) default ' ' not null,
  wbpccnam    varchar2(70) default ' ' not null,
  wbpccrol    varchar2(6) default ' ' not null,
  wbpcspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webpcpa1 primary key( 
wbpccode,
wbpccpid,
wbpcscid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webpcpa2 on webpcpaf
(
wbpccpid,
wbpccode,
wbpcscid
)
  tablespace pas_indx; 
