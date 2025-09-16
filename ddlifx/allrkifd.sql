create table allrkiaf
(
  alrkdept    char(3) default ' ' not null,
  alrkproc    char(9) default ' ' not null,
  alrkkkwd    char(15) default ' ' not null,
  alrkspar    char(25) default ' ' not null,
  lf          char(1)
);
create unique index allrkia1 on allrkiaf
(
alrkdept,
alrkproc,
alrkkkwd
);
create unique index allrkia2 on allrkiaf
(
alrkdept,
alrkkkwd,
alrkproc
);
revoke all on allrkiaf from public ; 
grant select on allrkiaf to public ; 
