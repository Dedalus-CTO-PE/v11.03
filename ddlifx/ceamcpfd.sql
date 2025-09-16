create table ceamcpaf
(
  cemcjcd     char(3) default ' ' not null,
  cemcspc     char(3) default ' ' not null,
  cemcpsc     char(7) default ' ' not null,
  cemcdqty    decimal(8,2) default 0 not null,
  cemctqty    decimal(8,2) default 0 not null,
  cemcspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ceamcpa1 on ceamcpaf
(
cemcjcd,
cemcspc,
cemcpsc
);
revoke all on ceamcpaf from public ; 
grant select on ceamcpaf to public ; 
