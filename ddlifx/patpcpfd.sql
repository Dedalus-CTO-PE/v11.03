create table patpcpaf
(
ptppcode    char(3),
ptppcpid    char(3),
ptppscid    char(3),
ptppcvid    char(1),
ptppcnam    char(70),
ptppcrol    char(6),
ptppspar    char(23),
lf          char(1)
);
create unique index patpcpa1 on patpcpaf
(
ptppcode,
ptppcpid,
ptppscid
);
create unique index patpcpa2 on patpcpaf
(
ptppcpid,
ptppcode,
ptppscid
);
revoke all on patpcpaf from public ; 
grant select on patpcpaf to public ; 
