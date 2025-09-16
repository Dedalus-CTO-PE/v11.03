create table patstads
(
sadyear     char(4),
sadtype     char(1),
sadcode     char(3),
sadmth1     decimal(5,0),
sadmth2     decimal(5,0),
sadmth3     decimal(5,0),
sadmth4     decimal(5,0),
sadmth5     decimal(5,0),
sadmth6     decimal(5,0),
sadmth7     decimal(5,0),
sadmth8     decimal(5,0),
sadmth9     decimal(5,0),
sadmth10    decimal(5,0),
sadmth11    decimal(5,0),
sadmth12    decimal(5,0),
sadmth13    decimal(5,0),
sadspare    char(9),
lf          char(1)
);
create unique index patstad1 on patstads
(
sadyear,
sadtype,
sadcode
);
revoke all on patstads from public ; 
grant select on patstads to public ; 
