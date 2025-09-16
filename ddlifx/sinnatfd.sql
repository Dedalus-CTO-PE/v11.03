create table sinnataf
(
sinacat     char(7),
sinanat     char(10),
sinaspa     char(30),
lf          char(1)
);
create unique index sinnata1 on sinnataf
(
sinacat
);
create unique index sinnata2 on sinnataf
(
sinanat,
sinacat
);
revoke all on sinnataf from public ; 
grant select on sinnataf to public ; 
