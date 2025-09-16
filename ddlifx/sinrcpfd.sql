create table sinrcpaf
(
sirppon     char(7),
sirpspa     char(50),
lf          char(1)
);
create unique index sinrcpa1 on sinrcpaf
(
sirppon
);
revoke all on sinrcpaf from public ; 
grant select on sinrcpaf to public ; 
