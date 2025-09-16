create table ceamepaf
(
  cemesty     char(3) default ' ' not null,
  cemekey     char(10) default ' ' not null,
  cemespc     char(3) default ' ' not null,
  cemepsc     char(7) default ' ' not null,
  cemedos     decimal(2,0) default 0 not null,
  cemetyq     decimal(2,0) default 0 not null,
  cemeqty     decimal(8,2) default 0 not null,
  cemespa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ceamepa1 on ceamepaf
(
cemesty,
cemekey,
cemespc,
cemepsc
);
revoke all on ceamepaf from public ; 
grant select on ceamepaf to public ; 
