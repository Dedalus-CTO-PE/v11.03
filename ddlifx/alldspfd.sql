create table alldspaf
(
  aldpdept    char(3) default ' ' not null,
  aldpct01    char(2) default ' ' not null,
  aldpct02    char(2) default ' ' not null,
  aldpct03    char(2) default ' ' not null,
  aldpct04    char(2) default ' ' not null,
  aldpct05    char(2) default ' ' not null,
  aldpct06    char(2) default ' ' not null,
  aldpct07    char(2) default ' ' not null,
  aldpct08    char(2) default ' ' not null,
  aldpct09    char(2) default ' ' not null,
  aldpct10    char(2) default ' ' not null,
  aldpct11    char(2) default ' ' not null,
  aldpct12    char(2) default ' ' not null,
  aldpct13    char(2) default ' ' not null,
  aldpct14    char(2) default ' ' not null,
  aldpct15    char(2) default ' ' not null,
  aldpct16    char(2) default ' ' not null,
  aldpct17    char(2) default ' ' not null,
  aldpct18    char(2) default ' ' not null,
  aldpct19    char(2) default ' ' not null,
  aldpct20    char(2) default ' ' not null,
  aldpct21    char(2) default ' ' not null,
  aldpct22    char(2) default ' ' not null,
  aldpct23    char(2) default ' ' not null,
  aldpct24    char(2) default ' ' not null,
  aldpct25    char(2) default ' ' not null,
  aldpct26    char(2) default ' ' not null,
  aldpspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index alldspa1 on alldspaf
(
aldpdept
);
revoke all on alldspaf from public ; 
grant select on alldspaf to public ; 
