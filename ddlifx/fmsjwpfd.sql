create table fmsjwpaf
(
  fmjwjty     char(1) default ' ' not null,
  fmjwjid     char(6) default ' ' not null,
  fmjwlno     char(3) default ' ' not null,
  fmjwline    char(70) default ' ' not null,
  fmjwspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index fmsjwpa1 on fmsjwpaf
(
fmjwjty,
fmjwjid,
fmjwlno
);
revoke all on fmsjwpaf from public ; 
grant select on fmsjwpaf to public ; 
